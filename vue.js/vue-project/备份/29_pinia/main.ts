import { createApp } from 'vue'
import App from './App.vue'
import { createPinia } from 'pinia'
// import Person from './components/Person.vue'
// createApp(Person).mount('#app')
//创建一个应用
const app = createApp(App)
const pinia = createPinia();
//挂载整个应用到app容器中去
app.use(pinia)
app.mount('#app')


