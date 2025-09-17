<template>
    <div class="news-page">
        <h1>📰 新闻页面</h1>
        <ul class="news-list">
            <li v-for="n in 5" :key="n">新闻条目 {{ n }} - 今日热点速递</li>
        </ul>
        <button>查看更多</button>
    </div>
</template>

<style scoped>
.news-page {
    padding: 40px;
    background-color: #f0f9ff;
    min-height: 80vh;
}

.news-page h1 {
    color: #1890ff;
    text-align: center;
    margin-bottom: 30px;
}

.news-list {
    list-style: none;
    padding: 0;
    max-width: 600px;
    margin: 0 auto;
}

.news-list li {
    background: white;
    margin: 10px 0;
    padding: 15px;
    border-radius: 8px;
    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
    transition: transform 0.2s;
}

.news-list li:hover {
    transform: translateX(5px);
    background: #e6f7ff;
}

button {
    display: block;
    margin: 30px auto;
    padding: 10px 30px;
    background: #1890ff;
    color: white;
    border: none;
    border-radius: 20px;
    cursor: pointer;
}
</style>

<script setup lang="ts">
// 新闻组件
</script>