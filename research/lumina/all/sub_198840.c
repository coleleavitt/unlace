__int64 __fastcall sub_198840(__int64 a1, const char *a2, unsigned __int16 a3, unsigned __int16 a4, int a5, int a6)
{
  unsigned __int16 v9; // ax
  const char *v10; // rsi
  struct addrinfo *v11; // rdi
  unsigned int v12; // ebx
  int ai_family; // eax
  struct sockaddr *v15; // rax
  struct sockaddr *ai_addr; // rax
  struct addrinfo *pai; // [rsp+0h] [rbp-70h] BYREF
  addrinfo req; // [rsp+8h] [rbp-68h] BYREF
  char v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v9 = 0;
  req.ai_flags = 2;
  memset(&req.ai_socktype, 0, 40);
  if ( a3 != 10 )
    v9 = a3;
  v10 = nullptr;
  req.ai_family = v9;
  if ( a4 )
  {
    sub_19D9D0((unsigned int)&v19, 8, (unsigned int)"%u", a4, a5, a6);
    v10 = &v19;
  }
  pai = nullptr;
  if ( getaddrinfo(a2, v10, &req, &pai) )
    return 0;
  v11 = pai;
  if ( !pai )
    return 0;
  if ( a3 == 10 )
  {
    ai_family = pai->ai_family;
    if ( ai_family == 10 )
    {
      ai_addr = pai->ai_addr;
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)ai_addr);
      *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)&ai_addr->sa_data[10]);
    }
    else
    {
      v12 = 0;
      if ( ai_family != 2 )
        goto LABEL_10;
      v15 = pai->ai_addr;
      *(_WORD *)(a1 + 18) = -1;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)&v15->sa_data[2];
    }
  }
  else
  {
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)pai->ai_addr);
  }
  v12 = 1;
LABEL_10:
  freeaddrinfo(v11);
  return v12;
}
