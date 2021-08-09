<!DOCTYPE html>
<html lang="pt-br">
<head>  
    <meta name="viewport" content="width=device-width, user-scalable=no">
    <meta charset="UTF-8">
    <title>Document</title>
    <link rel="stylesheet" href="css/index.css">
    <link rel="stylesheet" href="bower_components/materialize/dist/css/materialize.css">
    <link href="https://fonts.googleapis.com/css?family=Questrial" rel="stylesheet">
    <link rel="stylesheet" href="iconfont/material-icons.css">
</head>
<body>
    
    <div class="page page-active" id="pageLogin">
        <div class="login-header blue">
            <h4 class="white-text">MinhaLista</h4>
        </div>
        <div class="container">
            <div class="">
                <label for="">Email</label>
                <input type="email" placeholder="Digite seu Email">
            </div>
            <div>
                <label for="">Senha</label>
                <input type="password" placeholder="Digite sua senha">
            </div>
            <div>
                <button class="btn btn-block red darken-3 waves-effect targetPage" dt-page='#pageDashboard'>Entrar</button>
                <button class="btn btn-success waves-effect targetPage" dt-page='#pageDashboard'>Criar conta</button>
    

                
            </div>
        </div>
    </div>
