__int64 __fastcall sub_6B040(__int64 a1, __int64 *a2, char a3)
{
  bool v3; // zf
  socklen_t v5; // eax
  struct sockaddr *p_addr; // rbp
  int v7; // edi
  int v8; // edx
  __int64 result; // rax
  socklen_t len; // [rsp+Ch] [rbp-5Ch] BYREF
  char v11; // [rsp+10h] [rbp-58h] BYREF
  struct sockaddr addr; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v3 = *(_BYTE *)(a1 + 100) == 0;
  v13 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = 16;
    p_addr = (struct sockaddr *)&v11;
  }
  else
  {
    v5 = 28;
    p_addr = &addr;
  }
  v7 = *(_DWORD *)(a1 + 56);
  len = v5;
  v8 = getpeername(v7, p_addr, &len);
  result = 0;
  if ( !v8 )
    return sub_6AD40(a2, p_addr, len, a3);
  return result;
}

