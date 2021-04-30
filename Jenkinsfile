pipeline {
    agent any
//     agent {
//         label 'cpp'
//     }

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                git 'https://github.com/liupengzhouyi/dataPipeline.git'
                // sh 'mkdir build'
                sh 'cd build'
                sh 'pwd'
                sh 'ls -l'
                sh 'cmake ..'
                sh 'ls -l'
                sh 'make -j4'
                sh 'ls -l'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh 'python3 test.py'
                sh './dataPipeline'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}

