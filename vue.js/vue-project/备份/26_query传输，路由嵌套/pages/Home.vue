<template>
    <div class="home-page">
        <h1>🏠 首页</h1>
        <p>欢迎来到我的 Vue 项目首页！</p>
        <div class="box">这里是首页的主要内容区域</div>
    </div>
</template>

<style scoped>
.home-page {
    padding: 40px;
    text-align: center;
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    color: white;
    min-height: 80vh;
    border-radius: 12px;
}

.home-page h1 {
    font-size: 2.5rem;
    margin-bottom: 20px;
}

.home-page .box {
    background: rgba(255, 255, 255, 0.15);
    padding: 30px;
    margin-top: 30px;
    border-radius: 10px;
    backdrop-filter: blur(10px);
    display: inline-block;
}
</style>

<script setup lang="ts">
// 首页组件
</script>