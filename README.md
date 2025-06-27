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




#CS-370 Course Reflection
The Pirate Intelligent Agent program used a deep Q-learning algorithm to train a pirate agent to solve a maze. The code provided included a class representing the environment and a class that stored the agent's episodes. I was tasked with implementing an algorithm to train the agent where experience is stored, learned from, and used to interact with the environment by choosing from a set of action possibilities. 

In this course, I learned that computer scientists solve problems using logic, algorithms, and varying data structures. These tools are leveraged to help automate tasks, analyze information, and enhance decision-making. As a computer scientist, breaking problems into manageable components, testing iteratively, and improving the system through performance metrics were key to constructing a successful program. Additionally, computer scientists have ethical responsibilities to the end user and organization to create safe, fair, transparent programs that respect user privacy.




#CS-360 Course Reflection
The inventory management program was designed for small companies who need a simple, non-integrated program to efficiently manage stock. It fulfills the users' needs by offering easy account access and open product tracking using four primary screens: sign-in, registration, inventory view, and add product. Each of the screens places emphasis on ease of use, using clean design and simple features to make its use an uncomplicated experience.

I developed the app by adding and testing one feature at a time, having modulated code and dividing UI and logic. Testing at each step enabled early detection of issues and ensuring functionality, such as refreshing inventory when new items are being added. Seamless interaction between the front end and the database was one of the biggest challenges, particularly when synchronizing inventory in real-time. I catered to this by carefully controlling data flow and giving uniform read/write operations.

The view screen for the inventory was the highlight, where data handling, state management, and UI principles helped give a responsive and user-focused experience, showing my user-centered design and coding abilities.




#CS-305
Artemis Financial is a consulting firm specializing in financial services that tailors processes to individual retirement, saving, and investment objectives. They were looking to strengthen the security of their web application to properly secure highly sensitive client data, whose liability is undetermined when tampered with or accessed. Their main security concerns involved data integrity, communications security, and potential vulnerabilities. My contribution was to conduct an audit on the code base by looking at its total vulnerabilities, its dependencies for vulnerabilities, and the code itself. Ultimately, I performed a code refactor to address its vulnerabilities and bring the codebase to an industry-standard security level, securing the application and placing it on a defensive stance for compliance.
The priority to address the security of the Artemis Financial software was to identify its vulnerabilities through dependency scanning and refactoring the code where possible. In doing so, I could identify and exchange vulnerable or out-of-date libraries and reduce any potential attack vectors. I incorporated SHA-256 by performing checksums when communicating, using its collision resistance, and because it is widely accepted by the primary industry standard API, to configure the application using HTTPS Standard in opening a secured TLS 1.2+, using a Java Keystore (JKS) for certificate management, for mitigating man-in-the-middle (MITM) attacks. I wrote the application to strict secure coding conventions with regards to input parameters, encapsulation, and because it was sensitive data, I wrote it immutable on Oracle’s Secure Coding Guidelines for Java. The secure coding conventions were not only for practice but also compliant with JIC documentation, intending to decrease possible breaches after deployment.
One of the specific challenges I encountered in implementing changes in the vulnerability assessment stage was the changes I made to utilize constant-time comparisons for all checksum verifications to reduce timing attacks. Although the maximized exploit techniques using OWASP so I worked through NIST vulnerability assessments to specify possible risk. In the future, to improve security assessments, scanning checks for “not found” claims may potentially incorporate dynamic analysis. As part of the audit process, I verified functionality in testing once the application met specifications. This included completing the HTTPS handshake and verifying checksums during each round trip. The checks returned empty, confirming that no new vulnerabilities were introduced post-refactor.
This project experience solidified my belief that user-friendliness is ultimately what fosters trust and protects sensitive personal data within a secure system. I believe the system achieved this by securing data through TLS encryption and SHA-256 checksums for communication. With an emphasis on secure defaults, I limited the attack surface, guided by a resilient and unique perspective on balancing usability and security.
For any prospective employer, this report summarizes my two-month project. I demonstrated the ability to perform vulnerability assessments, apply cryptographic best practices, and employ adaptive communication tactics. I strengthened this work by refactoring code using OWASP and Oracle secure coding standards to ensure compliance. A particularly encouraging highlight was the suggestion of a minimal, targeted set of security improvements, a step toward supporting scalable and maintainable enterprise-level three-layer security defense.
