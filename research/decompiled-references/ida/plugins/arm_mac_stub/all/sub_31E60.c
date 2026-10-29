__int64 __fastcall sub_31E60(__int64 a1, __int64 a2)
{
  char v2; // al
  bool v3; // zf
  socklen_t v5; // eax
  struct sockaddr *p_addr; // r13
  int v7; // edi
  int v8; // eax
  int *v10; // r14
  int v11; // eax
  socklen_t addr_len; // [rsp+Ch] [rbp-6Ch] BYREF
  char v13; // [rsp+10h] [rbp-68h] BYREF
  struct sockaddr addr; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = *(_BYTE *)(a2 + 100);
  v3 = *(_QWORD *)(a1 + 56) == -1;
  *(_BYTE *)(a1 + 100) = v2;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v2 )
      {
        v5 = 28;
        p_addr = &addr;
      }
      else
      {
        v5 = 16;
        p_addr = (struct sockaddr *)&v13;
      }
      v7 = *(_DWORD *)(a2 + 56);
      addr_len = v5;
      v8 = accept4(v7, p_addr, &addr_len, 0x80000);
      *(_QWORD *)(a1 + 56) = v8;
      if ( v8 != -1 )
        break;
      v10 = __errno_location();
      if ( *v10 == 38 )
      {
        v11 = accept(*(_DWORD *)(a2 + 56), p_addr, &addr_len);
        *(_QWORD *)(a1 + 56) = v11;
        if ( v11 != -1 )
          return 1;
        if ( *v10 != 4 )
        {
LABEL_13:
          *(_QWORD *)(a1 + 88) = "accept";
          *(_DWORD *)(a1 + 96) = *v10;
          return 0;
        }
      }
      else if ( *v10 != 4 )
      {
        goto LABEL_13;
      }
      v2 = *(_BYTE *)(a1 + 100);
    }
  }
  return 1;
}

