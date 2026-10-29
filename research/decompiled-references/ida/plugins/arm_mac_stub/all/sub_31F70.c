__int64 __fastcall sub_31F70(__int64 a1, _DWORD *a2)
{
  bool v3; // zf
  socklen_t v5; // eax
  struct sockaddr *p_addr; // rsi
  int v7; // edi
  int v8; // edx
  __int64 result; // rax
  __int16 v10; // ax
  socklen_t len; // [rsp+Ch] [rbp-5Ch] BYREF
  char v12; // [rsp+10h] [rbp-58h] BYREF
  __int16 v13; // [rsp+12h] [rbp-56h]
  struct sockaddr addr; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v3 = *(_BYTE *)(a1 + 100) == 0;
  v15 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = 16;
    p_addr = (struct sockaddr *)&v12;
  }
  else
  {
    v5 = 28;
    p_addr = &addr;
  }
  v7 = *(_DWORD *)(a1 + 56);
  len = v5;
  v8 = getsockname(v7, p_addr, &len);
  result = 0;
  if ( !v8 )
  {
    if ( *(_BYTE *)(a1 + 100) )
      v10 = *(_WORD *)addr.sa_data;
    else
      v10 = v13;
    *a2 = (unsigned __int16)__ROL2__(v10, 8);
    return 1;
  }
  return result;
}

