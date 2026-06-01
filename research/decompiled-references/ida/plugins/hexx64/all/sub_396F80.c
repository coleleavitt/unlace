__int64 __fastcall sub_396F80(__int64 a1, double a2, double a3, __m128i a4, double a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rax
  const char *v12; // rax
  unsigned int v13; // [rsp+0h] [rbp-F0h]
  __int64 v14; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-C0h]
  __int64 v16; // [rsp+40h] [rbp-B0h]
  __int128 v17; // [rsp+48h] [rbp-A8h]
  __int128 v18; // [rsp+58h] [rbp-98h]
  __int64 v19; // [rsp+88h] [rbp-68h]
  int v20; // [rsp+90h] [rbp-60h]
  __int64 v21; // [rsp+98h] [rbp-58h]
  char v22; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v23; // [rsp+B0h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v14 = 0;
  v16 = 0;
  v19 = 1;
  v20 = -1;
  v21 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)find_tinfo_udt_member() != -1 )
  {
    while ( 1 )
    {
      v5 = sub_387F90((__int64)&v14, (__int64)"Please enter field name");
      if ( !(_BYTE)v5 )
        break;
      if ( (unsigned __int64)v15 > 1 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( v11 )
          *(_DWORD *)(v11 + 108) |= 8u;
      }
      else
      {
        sub_6B870(&v14);
        v6 = *(_QWORD *)(a1 + 32);
        if ( v6 )
          *(_DWORD *)(v6 + 108) |= 8u;
      }
      v7 = set_tinfo_property4();
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
        {
          v13 = v7;
          sub_395A90(a1, 0, 0.0, v9, v7, v8, a3, a4, a5);
          v7 = v13;
        }
      }
      if ( !v7 )
      {
        sub_38F620(a1, 1);
        goto LABEL_11;
      }
      v12 = (const char *)tinfo_errstr();
      sub_2B4E70((__int64)"%s failed: %s", "Renaming field", v12);
    }
  }
  v5 = 0;
LABEL_11:
  clear_tinfo_t();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v5;
}

