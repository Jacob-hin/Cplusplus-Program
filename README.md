# Cplusplus-Program

#Summary of project
Created a program that accepts user defined interest rates, monthly contributions, initial investment, and investment length to calculate monthly compounded interest with/without the specified monthly contributions. 

#What did I do well and what could be improved
The program as a whole functions as intended and correctly calculates monthly compounded interest. An improvement that could be made is implementing the ability for a user to alter a single variable and update the tables with these small adjustments rather than requiring the user to re-input all variables for any desired alteration.

#What piece of code was the most challenging to write
The most challenging feature to implement in my program was the function to calculate monthly compounded interest with monthly contributions. This was difficult due to the necessity for interest earned over the term and the total balance to be calculated. I overcame this by adjusting the calculation based off of the values it returned, compared to what would be expected. These micro-adjustments are what led me to a function that operated as intended. 

#What skills from this project are particularly transferable
This project as a whole focused heavily on the object-oriented programming aspect of C++. Given this, many variables and objects needed to be accessed by a variety of functions and methods. Applying this same sort of methodology to future projects will be paramount to their success, especially concerning an ability to ensure proper encapsulation. 

#How did I maintain readability, maintanability, and adaptability
Readability of my program was ensured through a proper use of whitespace, comments, and proper naming conventions. In tandem with these naming conventions, functions served a single purpose to maintain an easily traceable foundation if an area was to perform outside of specifications. Lastly, as information was stored in an object and passed to each function, the adaptability of my program allows for the inclusion or exclusion of any future expansions in the project scope. 




#How do I interpret user needs and implement them into a program? How does creating “user stories” help with this?
I interpret users' needs and implement them in a program by gathering their requirements, prioritizing them, and then translating them into actionable features. Creating user stories helps me frame needs from the user's perspective: "As a user, I want [some feature], so that I can receive [some benefit]." This helps ensure the program provides value and solves real problems. It also simplifies development and keeps me focused while allowing for iterative improvements based on feedback.

#How do I approach developing programs? What Agile processes do I hope to incorporate into my future development work?
I approach developing programs by analyzing desired behaviors and implementing methods that perform tasks to achieve those goals, selecting methods based on their ability to interact with relevant attributes. In my future development work, I aim to incorporate Agile processes such as user stories, which help define user expectations and ensure the program meets their needs, and test cases, which are essential for verifying that the program satisfies project requirements.

#What does it mean to be a good team member in software development?
In software development, especially in Agile and Scrum environments, a good team member means an active contributor to the team's success through collaboration, communication, and accountability. It means attending Scrum ceremonies (stand-ups, sprint planning, retrospectives), delivering work incrementally, and adapting to feedback. A good team member supports others, openly shares progress or blockers, and focuses on achieving the goals of the team. Embracing transparency, continuous improvement, and commitment to delivering value in line with the Agile principles enables a very productive and cohesive team.




#Briefly summarize The Gaming Room client and their software requirements. Who was the client? What type of software did they want you to design?
The client, The Gaming Room, sought the development of a web-based version of their Android game, Draw It or Lose It, whereby teams compete against each other in an attempt to guess puzzles from rendered drawings. The software needed to be able to support several teams with multiple players, ensure uniqueness of names for both games and teams, and allow only one instance of the game in memory by uniquely identifying any game, team, or player using an ID. The goal was to build a scalable, cross-platform game that met these functional requirements while streamlining development.

#What did you do particularly well in developing this documentation?
In developing this documentation, I made sure that the analysis of the client's requirements, design constraints, and technology recommendations were well-structured and in a logical flow. I performed a critical review of the operating platforms, the recommendation of Linux, and the role of security, storage management, and memory management. Recommendations are practical and well-grounded, aiming at the client's needs while guaranteeing scalability, performance, and security for the game application.

#What about the process of working through a design document did you find helpful when developing the code?
Working through the design document helped me by clearly outlining the requirements and constraints, which guided my code development and ensured I stayed aligned with the project goals. The document helped identify potential challenges early in the process, allowing me to develop solutions that were both efficient and scalable.

#If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?
If I could revise one piece of my work that I worked on in these documents, that would be the part associated with the server-side architecture explanation; I would elaborate and improve it by giving more concrete recommendations in view of load balancing and failover mechanisms for scalability and high traffic reliability.

#How did you interpret the user’s needs and implement them into your software design? Why is it so important to consider the user’s needs when designing?
I interpreted the needs of the user by carefully examining their requirements for functionality such as unique identifiers of a team and player to incorporate into the design. Consideration of the user's needs is important because it ensures the software will meet their expectations, provide a good user experience, and possibly help avoid costly reworks.

#How did you approach designing software? What techniques or strategies would you use in the future to analyze and design a similar software application?
In software design, I started by analyzing functional and non-functional requirements and then structured the code with object-oriented principles. In the future, I would apply Agile techniques like creating user stories and collaborating closely with stakeholders to ensure the design is adaptable and meets evolving needs.




#CS-300 Course Reflection
For these projects I created an advising program that efficiently loads, stores, and manages the data for courses using a well-defined data structure. The problem required designing pseudocode for vector, hash table, and tree implementations, do Big O analyses, and finally select the best data structure based on runtime and memory efficiency. I began by writing pseudocode, paying close attention to how each data structure would retrieve an input file, create course objects, and subsequently manage the operations that would follow in a menu driven way. Through this process, I was reminded of the vital importance data structures have in optimizing performance, especially with searching, sorting, and displaying course information. 
During the project, I also faced challenges, such as parsing complex files and sorting the course data in an alphanumeric way. I tackled these roadblocks by going back to pseudocode, unit testing smaller portions of my code, and utilizing IDE debugging tools. This experience reaffirmed the importance that planning and analysis take precedence over implementation in software design process. On top of that, it sharpened my coding standards, as I had to follow industry practices, such as naming reserves clearly, writing in-line comments explaining the purpose of code, and implementing error handling logic to ensure the code is maintainable and easy to read, and future enhancements are possible. 




#CS-255 Course Reflection
The DriverPass project involved designing a cloud-hosted system that automated the management of lessons, customer accounts, payments, and DMV communications, ultimately aiding drivers in successfully passing their driving tests through streamlined support and guidance. The client wanted an all-in-one solution to support their customers, instructors, administrators, and support staff, incorporating lesson scheduling, online classes, and practice tests. One of my strengths was my ability to take user needs and synthesize those requirements into an intuitive, usable design — specifically, through a smooth integration of the scheduling, payment, and notification components. If I could change one thing, it would be to refine the notification system to allow for more real-time communication to avoid possible delays. Understanding user requirements and expectations is integral to designing a system that can go beyond just functionality, to one that adds value to all the stakeholders involved. I believe in requirement analysis, drawing detailed diagrams, and thinking in terms of users while designing software. Moving forward, I would rely on iterative design and prototyping to validate concepts early and respond to feedback quickly.
