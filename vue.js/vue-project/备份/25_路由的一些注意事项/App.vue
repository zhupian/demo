<template>
  <div class="app">
    <h2>1.路由器工作模式 history和hash模式 </h2>
    <h2>history模式</h2>
    <h2>优点:url美观,不带有#,更接近传统url</h2>
    <h2>缺点:后期项目上线,需服务端配合 处理路径问题</h2>
    <h2>hash模式</h2>
    <h2>兼容性更好,不需要处理路径问题</h2>
    <h2>url丑,带有#</h2>
    <h2>2.to的两种写法(对象写法又分为两种写法)</h2>
    <h2>3.路由的命名</h2>
    <!-- 导航区 -->
    <div class="navigate">
      <RouterLink to="/Home" active-class="active">首页</RouterLink>
      <RouterLink :to="{ name: 'news' }" active-class="active">新闻</RouterLink>
      <RouterLink :to="{ path: '/About' }" active-class="active">关于</RouterLink>
    </div>
    <!-- 展示区 -->
    <div class="main-content">
      <RouterView></RouterView>
    </div>
  </div>
</template>

<style scoped>
.app {
  font-family: Arial, sans-serif;
  max-width: 1200px;
  margin: 0 auto;
  padding: 20px;
  background-color: #f9f9f9;
}

.active {
  background-color: red;
}

h2 {
  text-align: center;
  color: #42b983;
  margin-bottom: 30px;
}

.navigate {
  display: flex;
  justify-content: center;
  gap: 20px;
  margin-bottom: 30px;
  padding: 15px;
  background-color: #fff;
  border-radius: 8px;
  box-shadow: 0 2px 8px rgba(0, 0, 0, 0.1);
}

.navigate a {
  text-decoration: none;
  color: #333;
  font-weight: bold;
  padding: 8px 16px;
  border-radius: 5px;
  transition: all 0.3s ease;
}

.navigate a:hover {
  background-color: #42b983;
  color: white;
}

.main-content {
  background-color: white;
  padding: 30px;
  border-radius: 8px;
  box-shadow: 0 2px 8px rgba(0, 0, 0, 0.1);
  min-height: 300px;
  display: flex;
  align-items: center;
  justify-content: center;
  text-align: center;
  color: #555;
  font-size: 18px;
}

/* 响应式适配 */
@media (max-width: 768px) {
  .navigate {
    flex-direction: column;
    align-items: center;
    gap: 10px;
  }

  .navigate a {
    width: 80%;
    text-align: center;
  }
}
</style>

<script setup lang="ts" name="App">
import { RouterLink } from 'vue-router';

</script>