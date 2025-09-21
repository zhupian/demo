import { createApp } from 'vue'
import App from './App.vue'
import { createRouter } from 'vue-router'
//引入路由器
import router from './router'
// import Person from './components/Person.vue'
// createApp(Person).mount('#app')
//创建一个应用
const app = createApp(App)
//使用路由器
app.use(router)
//挂载整个应用到app容器中去
app.mount('#app')

