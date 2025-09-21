<template>
    <div class="About-page">
        <h1>ℹ️ 关于我们</h1>
        <div class="card">
            <p>这是一个使用 Vue 3 + TypeScript + Vue Router 构建的示例项目。</p>
            <p>开发者：匿名侠</p>
            <p>版本:v1.0.0</p>
        </div>
        <footer>© 2025 My Vue App. All rights reserved.</footer>
    </div>
</template>

<style scoped>
.About-page {
    padding: 40px;
    background-color: #fafafa;
    min-height: 80vh;
    text-align: center;
}

.About-page h1 {
    color: #52c41a;
    margin-bottom: 30px;
}

.card {
    background: white;
    padding: 30px;
    border-radius: 12px;
    box-shadow: 0 4px 12px rgba(0, 0, 0, 0.08);
    display: inline-block;
    margin: 20px;
    text-align: left;
    line-height: 1.8;
}

footer {
    margin-top: 50px;
    color: #aaa;
    font-size: 0.9rem;
}
</style>

<script setup lang="ts">
// 关于页面组件
</script>