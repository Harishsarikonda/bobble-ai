
FROM tomcat:8.0

LABEL author="harish" email="harish.s17@iiits.in"
 
WORKDIR /usr/local/tomcat/webapps/
 
RUN apt update && apt install -y net-tools telnet curl vim

EXPOSE 8080
 
COPY ./sample.war /usr/local/tomcat/webapps/

ENV role="app" env="dev" name="harish"




