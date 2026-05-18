__int64 __fastcall sub_16F500(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r12
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // eax
  const char *v12; // rax
  char v14; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = a2;
  v4 = sub_199140(a1, a2);
  if ( (*(int (__fastcall **)(_QWORD))(qword_242700 + 272))(*(_QWORD *)(a1 + 88)) > 0 )
  {
LABEL_16:
    *(_DWORD *)(a1 + 76) = -1;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v5 = sub_167210(*(_QWORD *)(a1 + 32));
      if ( v5 <= 0 )
        break;
      *(_DWORD *)(a1 + 76) = v3;
      v6 = *(_QWORD *)(a1 + 88);
      v7 = (__int64)&v14;
      v8 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(qword_242700 + 264))(v6, &v14, 1);
      v5 = v8;
      if ( v8 >= 0 )
        goto LABEL_16;
      if ( v8 == -1 )
      {
        v6 = *(_QWORD *)(a1 + 88);
        v7 = 0xFFFFFFFFLL;
        v11 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_242700 + 232))(v6, 0xFFFFFFFFLL);
        if ( v11 == 5 )
        {
          v12 = "irs";
LABEL_14:
          *(_QWORD *)(a1 + 64) = v12;
          return (unsigned int)v5;
        }
        if ( v11 == 6 || v11 == 1 )
        {
          v12 = "openssl";
          goto LABEL_14;
        }
        *(_DWORD *)(a1 + 72) = 0;
        *(_QWORD *)(a1 + 64) = "";
      }
      if ( v3 != -1 )
      {
        v9 = sub_199140(v6, v7);
        v10 = v9 - v4;
        v4 = v9;
        v3 -= v10 / 0x3E8;
        if ( v3 < 0 )
          v3 = 0;
      }
    }
    *(_QWORD *)(a1 + 64) = "irs";
  }
  return (unsigned int)v5;
}
