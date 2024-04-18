# Options API

This repository contains an API server implemented in C++ using gRPC for pricing financial options models such as Black-Scholes, Heston, and Variance Gamma.

## What is gRPC?

gRPC is a high-performance, open-source RPC (Remote Procedure Call) framework developed by Google. It uses Protocol Buffers as the interface definition language (IDL) for defining services and message types. gRPC provides features such as bi-directional streaming, authentication, and load balancing, making it suitable for building efficient distributed systems.

## Benefits of gRPC

- **Performance**: gRPC offers high performance by using HTTP/2 as the underlying protocol, which allows multiplexing multiple requests over a single TCP connection. It also supports features like streaming, compression, and asynchronous processing.
- **Language agnostic**: gRPC supports multiple programming languages, making it easy to build polyglot systems where different components are implemented in different languages.
- **IDL-driven development**: gRPC uses Protocol Buffers for defining services and message types, which provides a clear and concise way to define APIs and ensures consistent communication between services.
- **Interoperability**: gRPC supports interoperability between different programming languages and platforms, allowing clients and servers to communicate seamlessly regardless of the language or platform they are implemented in.

## Performance of gRPC vs HTTPS

gRPC offers several performance advantages over traditional HTTP/HTTPS-based APIs:

- **Reduced latency**: gRPC uses HTTP/2's multiplexing and streaming capabilities to reduce latency by allowing multiple requests to be sent over a single TCP connection.
- **Efficient serialization**: gRPC uses Protocol Buffers, which offers efficient binary serialization, resulting in smaller message sizes compared to JSON or XML-based serialization used in HTTP APIs.
- **Streaming support**: gRPC supports both unary (single request, single response) and streaming (multiple requests or responses) RPCs, which can be more efficient for certain use cases compared to traditional request-response APIs.

## Advantages of Heston and Variance Gamma Models

While the Black-Scholes model is widely used for pricing financial options, it has certain limitations, especially when dealing with real-world market conditions. The Heston model and Variance Gamma model offer several advantages over the Black-Scholes model:

- **Incorporating stochastic volatility**: The Heston model introduces stochastic volatility, which allows for more realistic modeling of volatility behavior in financial markets. Unlike the Black-Scholes model, which assumes constant volatility, the Heston model captures the tendency of volatility to fluctuate over time.
  
- **Capturing jumps and heavy tails**: The Variance Gamma model is capable of capturing jumps and heavy-tailed distributions in asset prices, which are often observed in financial markets. This allows for more accurate pricing of options, particularly in markets where extreme events are common.

- **Flexible parameterization**: Both the Heston model and Variance Gamma model offer flexible parameterization, allowing traders and analysts to calibrate the models to historical data and market conditions more effectively. This flexibility can lead to more accurate pricing and risk management.

- **Better fit for complex market scenarios**: In scenarios where the underlying asset exhibits non-normal or skewed distributions, or where volatility exhibits complex patterns such as mean reversion or time-varying dynamics, the Heston model and Variance Gamma model can provide better fit and predictive power compared to the simplistic assumptions of the Black-Scholes model.

By incorporating these advanced modeling techniques, the Heston model and Variance Gamma model offer traders and analysts a more comprehensive framework for pricing options and managing risk in complex financial markets.

## Prerequisites

Before running the server, ensure you have the following prerequisites installed:

- C++ compiler (supporting C++11)
- gRPC and Protocol Buffers compiler (`protoc`)
- gRPC C++ runtime
- Protocol Buffers C++ runtime

## Installation

1. Clone the repository:

```bash
git clone https://github.com/your_username/options-api.git
cd options-api
```

## Resources

Here are some helpful resources for learning more about financial options pricing, gRPC, and related topics:

- **Financial Options Pricing**:
  - Black-Scholes Versus Heston Option Models Pricing Paper by Hsin-Fang Wu:
      - https://digitalcommons.bard.edu/cgi/viewcontent.cgi?article=1212&context=senproj_s2019
  - NYU Engineering Variance Gamma Model Paper:
      - https://engineering.nyu.edu/sites/default/files/2018-09/CarrEuropeanFinReview1998.pdf
  - Heston Model Formula:
      - https://quant.stackexchange.com/questions/18684/heston-model-option-price-formula#:~:text=The%20Heston%20model%20is%20given,Wt%3D%CF%81dt.
  - https://fastercapital.com/content/Comparing-Option-Pricing-Models--Beyond-Black-Scholes.html

- **gRPC**:
  - [gRPC Official Documentation](https://grpc.io/docs/)
  - [gRPC GitHub Repository](https://github.com/grpc/grpc)
  - [Protocol Buffers Language Guide](https://developers.google.com/protocol-buffers/docs/proto3)

- **Financial Modeling**:
  - [QuantLib - Open-source Library for Quantitative Finance](https://www.quantlib.org/)
  - [PyQuant - Python Library for Quantitative Finance](https://github.com/ranaroussi/pyquant)


Feel free to add more resources or categories as needed. These links can provide additional context and guidance for understanding financial options pricing, gRPC, and related topics.
