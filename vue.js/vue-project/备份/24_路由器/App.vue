<template>
  <div class="app">
    <h2>一般组件放在components,vue组件放在pages</h2>
    <h2>当你从关于点击新闻的时候关于消失了,其实是被卸载了</h2>
    <!-- 导航区 -->
    <div class="navigate">
      <RouterLink to="/Home" active-class="active">首页</RouterLink>
      <RouterLink to="/News" active-class="active">新闻</RouterLink>
      <RouterLink to="/About" active-class="active">关于</RouterLink>
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