unsigned __int64 __fastcall sub_1B4390(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // r13
  __int128 v7; // rdi
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)&v7 + 1) = v10;
    *(_QWORD *)&v7 = a2;
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0;
    v12 = 0;
    sub_11FCA0(v7, v3, 1u, 0xFFFF0000);
    v8 = sub_A58A0((__int64)a2, v10, a3, 0, 1u);
    if ( a3 == v8 )
    {
      if ( !v11 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( v8 )
    {
      if ( !(unsigned __int8)sub_1B3E30(a2, v3, a3) )
      {
        if ( !v11 )
        {
LABEL_7:
          qfree();
          *(_BYTE *)(a1 + 88) = 1;
          return v13 - __readfsqword(0x28u);
        }
LABEL_6:
        *(_QWORD *)&v12 = 0;
        qfree();
        goto LABEL_7;
      }
      if ( !v11 )
      {
LABEL_11:
        qfree();
        return v13 - __readfsqword(0x28u);
      }
    }
    else if ( !v11 )
    {
      goto LABEL_11;
    }
    *(_QWORD *)&v12 = 0;
    qfree();
    goto LABEL_11;
  }
  return v13 - __readfsqword(0x28u);
}

