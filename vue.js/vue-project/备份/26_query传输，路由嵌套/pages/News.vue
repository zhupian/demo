<template>
    <!-- 导航区 -->
    <div class="news-page">
        <h1>📰 新闻页面</h1>
        <ul>
            <li v-for="i in newList" :key="i.id">
                <!-- 第一种传参数 -->
                <!-- <RouterLink :to="`/News/details?id=${i.id}&time=${i.time}&thing=${i.thing}`">{{ i.thing }}</RouterLink> -->
                <!-- 第二种传参数 -->
                <RouterLink :to="{
                    path: '/news/details',
                    query: { id: i.id, time: i.time, thing: i.thing }
                }">
                    {{ i.thing }}
                </RouterLink>
            </li>
        </ul>
        <button>查看更多</button>
    </div>
    <!-- 展示区 -->
    <div class="new-content">
        <RouterView></RouterView>
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
import { ref } from 'vue';
const newList = ref([
    { id: "abc01", time: "2005", thing: "kill" },
    { id: "abc02", time: "2341", thing: "eat" },
    { id: "abc03", time: "1998", thing: "run" }
])
</script>