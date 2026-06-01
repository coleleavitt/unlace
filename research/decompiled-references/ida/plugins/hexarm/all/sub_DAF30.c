__int64 __fastcall sub_DAF30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 i; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-88h] BYREF
  __int128 v11; // [rsp+30h] [rbp-80h]
  _QWORD v12[2]; // [rsp+48h] [rbp-68h] BYREF
  __int64 v13; // [rsp+58h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-50h]
  unsigned __int64 v15; // [rsp+70h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v11 = 0;
  v9[0] = 0;
  v9[1] = 0;
  v10 = 0;
  sub_1238E0(a1, v9, a2, 0, 4294901760LL);
  for ( i = *a3; i; i = *(_QWORD *)(i + 16) )
  {
    v4 = sub_128E80(a1, a2, &i, 0);
    v5 = v4;
    if ( !v4 )
      break;
    if ( !*(_BYTE *)(v4 + 64) )
      goto LABEL_16;
    sub_127460(v12, a1, v4, 0);
    if ( (unsigned __int8)sub_64220(v9, v12) )
    {
      if ( (unsigned __int8)sub_318300(&v13, &v10) )
      {
        if ( v13 )
        {
          v14 = 0;
          qfree();
        }
        qfree();
LABEL_16:
        *a3 = i;
        goto LABEL_9;
      }
      if ( v13 )
      {
LABEL_6:
        v14 = 0;
        qfree();
      }
    }
    else if ( v13 )
    {
      goto LABEL_6;
    }
    qfree();
  }
  v5 = 0;
LABEL_9:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  qfree();
  return v5;
}

