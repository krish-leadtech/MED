body {
    font-family: sans-serif;
    margin: 0;
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 100vh;
    background: linear-gradient(135deg, #fce4ec, #f8bbd0); /* Light pink gradient */
}

.container {
    width: 350px;
    padding: 20px;
    background-color: #fff8f8; /* Very light pink background */
    border-radius: 10px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
}

.header {
    text-align: center;
    margin-bottom: 20px;
}

.header h1 {
    font-size: 1.8em;
    margin-bottom: 5px;
    color: #e91e63; /* Pink title color */
}

.header a {
    text-decoration: none;
    color: #c2185b; /* Darker pink link color */
}

.form-container {
    display: flex;
    flex-direction: column;
}

form {
    display: flex;
    flex-direction: column;
}

label {
    margin-bottom: 5px;
    font-weight: bold;
    color: #ad1457; /* Pink label color */
}

input[type="email"],
input[type="password"] {
    padding: 10px;
    margin-bottom: 15px;
    border: 1px solid #f06292; /* Pink border */
    border-radius: 5px;
}

.phone-signin {
    text-align: center;
    margin-bottom: 15px;
    text-decoration: none;
    color: #c2185b; /* Darker pink link color */
}

.signin-btn {
    background-color: #e91e63; /* Pink button background */
    color: white;
    padding: 12px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    margin-bottom: 20px;
}

.signin-btn:hover {
    background-color: #c2185b; /* Darker pink hover background */
}

.social-login {
    display: flex;
    flex-direction: column;
    gap: 10px;
}

.social-btn {
    padding: 10px;
    border: 1px solid #f06292; /* Pink border */
    border-radius: 5px;
    cursor: pointer;
    background-color: #fce4ec; /* Light pink background */
    text-align: center;
    color: #ad1457; /* Pink text color */
}

.social-btn.google {
    background-color: #db4437; /* Google red */
    color: white;
    border: none;
}

.social-btn.facebook {
    background-color: #3b5998; /* Facebook blue */
    color: white;
    border: none;
}

.social-btn.apple {
    background-color: #000;
    color: white;
    border: none;
}

/* OTP Page Styles */
.otp-container {
    text-align: center;
    margin-top: 20px;
}

.otp-input {
    display: flex;
    justify-content: center;
    margin-bottom: 20px;
}

.otp-digit {
    width: 40px;
    height: 40px;
    margin: 0 5px;
    text-align: center;
    font-size: 1.2em;
    border: 1px solid #f06292;
    border-radius: 5px;
}

.verify-btn, .resend-btn {
    padding: 12px 20px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    font-weight: bold;
    margin: 5px;
}

.verify-btn {
    background-color: #e91e63;
    color: white;
}

.resend-btn {
    background-color: #fce4ec; /* Light pink */
    color: #ad1457;
    border: 1px solid #f06292;
}
/* ... (Existing CSS) ... */

.question-container {
    text-align: center;
    margin-top: 20px;
}

.question-container p {
    margin-bottom: 20px;
}

.get-started-btn, .answer-later-btn {
    padding: 12px 20px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    font-weight: bold;
    margin: 5px;
}

.get-started-btn {
    background-color: #e91e63;
    color: white;
}

.answer-later-btn {
    background-color: #fce4ec;
    color: #ad1457;
    border: 1px solid #f06292;
}