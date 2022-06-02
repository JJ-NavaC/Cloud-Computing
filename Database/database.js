const mongoose = require('mongoose')

mongoose.connect('mongodb://localhost/datas', {
  useNewUrlParser: true,
  useUnifiedTopology: true
}).then(db => console.log('conectado a la db'))