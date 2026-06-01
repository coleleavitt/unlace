__int64 __fastcall sub_6E760(__int64 a1, const char *a2)
{
  const char *v2; // rsi
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v7; // r13
  const char *v8; // r14
  __int64 v9; // rax
  const char *v10; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v10 = nullptr;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  sub_FB10((__int64 *)&v10, (__int64)"??_R0%s@8", a2);
  v2 = s1;
  if ( (_QWORD)v11 )
    v2 = v10;
  v3 = demangle_name(&v12, v2, 514047591, 2);
  v4 = v12;
  if ( v3 >= 0
    && (v5 = v13, (unsigned __int64)v13 > 0x17)
    && (v7 = v13 - 24, v8 = (const char *)(v12 + v13 - 24), !strncmp(v8, " `RTTI Type Descriptor'", 0x17u)) )
  {
    if ( v5 == 24 )
    {
      if ( v4 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v4);
        v9 = v13;
        v4 = 0;
      }
      else
      {
        v7 = *((_QWORD *)&v13 + 1);
        v9 = 24;
      }
    }
    else
    {
      *(_QWORD *)&v13 = v5 - 23;
      *v8 = 0;
      v4 = v12;
      v7 = *((_QWORD *)&v13 + 1);
      v9 = v13;
    }
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v7;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
    if ( v4 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v4);
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return a1;
}
