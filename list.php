<?php
include("include/common.php");
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>
    <title>List of file were uploaded</title>
</head>

<body>
    <div class="container">
        <div class="row mt-5">
            <div class="m-auto col-md-8">
                <h3 class="text-center">LIST FILE UPDATED</h3> <br>
                <table class="table table-hover table-bordered">
                    <col style="width: 20%;" />
                    <col style="width: 80%;" />
                    <thead>
                        <tr class=" text-center">
                            <th>STT</th>
                            <th>Folder</th>
                        </tr>
                    </thead>
                    <tbody>
                        <?php
                        // $uploadPath chứa đường dẫn tới thư mục chứa các file cần được liệt kê
                        $uploadPath = DOCUMENT_ROOT_PATH . UPLOAD_PATH;
                        $subDirs = scandir($uploadPath);

                        foreach ($subDirs as $idx => $subDir) {
                            $subDirPath = $uploadPath . '/' . $subDir;
                            if (is_dir($subDirPath)) {
                                $files = scandir($subDirPath);
                                if ($subDir != "." && $subDir != "..") {
                                    foreach ($files as $file) {
                                        $filePath = $subDirPath . '/' . $file;
                                        if (is_file($filePath)) {
                        ?>
                                            <tr>

                                                <td class="text-center"><?php echo $idx - 1; ?></td>
                                                <td>
                                                    <p class="d-inline-flex gap-1">
                                                        <a class="text-dark" style="text-decoration: none;" data-bs-toggle="collapse" href="#dropdownFileName<?php echo $idx + 1; ?>" aria-expanded="false" aria-controls="collapseExample">
                                                            <?php echo $subDir . "<br>"; ?>
                                                        </a>
                                                    </p>
                                                    <div class="collapse text-center" id="dropdownFileName<?php echo $idx + 1; ?>">
                                                        <div class="card card-body text-danger">
                                                    <?php echo $file . "<br>";
                                                }
                                            } ?>
                                                        </div>
                                                    </div>
                                                </td>
                                    <?php
                                }
                            }
                        }
                                    ?>
                                            </tr>
                    </tbody>
                </table>
                <div>
                    <a href="index.php" class="mx-3" style="text-decoration: none;">Trở lại trang chủ</a>
                </div>
            </div>
        </div>
    </div>
</body>

</html>