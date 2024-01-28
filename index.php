<?php
include("include/common.php");


if (is_method_POST()) {
    $name = $_POST["username"];
    $nameNoAccent = removeAccent($name);
    upload_and_return_filename("my_files", $nameNoAccent);
    if (is_method_post()) {
        js_alert("Nộp bài thành công!");
        js_redirect_to("index.php");
    } else {
        js_alert("Có lỗi trong quá trình nộp!");
    }
}

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <title>Upload file page</title>
</head>

<body>
    <div class="container py-5">
        <div class="row my-3 ">
            <div class="col-md-5 m-auto">
                <h3 class="text-center">UPLOAD FILE PAGE</h3> <br>
                <form method="POST" enctype="multipart/form-data">
                    <div class="input-group d-flex">
                        <span class="input-group-text" id="basic-addon1">Nhập Tên</span>
                        <input type="text" name="username" class="form-control" placeholder="Tên đầy đủ" aria-label="Username" aria-describedby="basic-addon1" require>
                    </div>
                    <div class="d-flex align-items-baseline">
                        <div class="input-group my-3">
                            <input type="file" name="my_files" class="form-control" id="inputGroupFile02">
                        </div>
                        <button type="submit" class="btn btn-outline-dark ms-2">Nộp</button>
                    </div>
                </form>
                <div class="mx-2">
                    <a href="list.php" style="text-decoration: none;">Danh sách bài đã nộp</a>
                </div>
            </div>
        </div>
    </div>
</body>

</html>