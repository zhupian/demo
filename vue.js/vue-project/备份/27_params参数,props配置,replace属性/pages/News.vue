<template>
    <div class="news-container">
        <!-- 导航/列表区 -->
        <div class="news-page">
            <h1>新闻页面</h1>
            <ul class="news-list">
                <li v-for="i in newList" :key="i.id">
                    <RouterLink :to="{
                        name: 'details',
                        query: { id: i.id, time: i.time, thing: i.thing }
                    }">
                        {{ i.id }}
                    </RouterLink>
                </li>
            </ul>
            <button>查看更多</button>
        </div>

        <!-- 嵌套路由展示区 -->
        <div class="new-content">
            <RouterView></RouterView>
        </div>
    </div>
</template>

<style scoped>
.news-container {
    padding: 20px;
    background-color: #f0f9ff;
    min-height: 80vh;
    display: flex;
    flex-direction: column;
    gap: 30px;
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

.new-content {
    padding: 20px;
    background: white;
    border-radius: 8px;
    box-shadow: 0 2px 8px rgba(0, 0, 0, 0.1);
}
</style>

<script setup lang="ts">
import { ref } from 'vue'

const newList = ref([
    { id: "abc01", time: "2005", thing: "kill" },
    { id: "abc02", time: "2341", thing: "eat" },
    { id: "abc03", time: "1998", thing: "run" }
])
</script>