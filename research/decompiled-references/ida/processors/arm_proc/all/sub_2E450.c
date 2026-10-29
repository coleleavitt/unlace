__int64 __fastcall sub_2E450(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // r11d
  __int64 *v10; // rax
  char v11; // al
  unsigned __int8 v13; // [rsp+Ch] [rbp-94h]
  unsigned __int8 v14; // [rsp+Ch] [rbp-94h]
  __int64 v15; // [rsp+18h] [rbp-88h] BYREF
  __int64 v16; // [rsp+20h] [rbp-80h] BYREF
  __int128 v17; // [rsp+28h] [rbp-78h]
  char v18; // [rsp+38h] [rbp-68h]
  __int64 *v19; // [rsp+40h] [rbp-60h] BYREF
  __int128 v20; // [rsp+48h] [rbp-58h]
  char v21; // [rsp+58h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  result = a3 == 161;
  LOBYTE(result) = (a3 == 13) | result;
  if ( !(_BYTE)result )
  {
    LOBYTE(v4) = a4 == 13 || a4 == 161;
    if ( (_BYTE)v4 )
      return result;
    v7 = *(_QWORD *)(a2 + 16);
    v16 = 0;
    v18 = 0;
    v17 = 0;
    if ( !(unsigned __int8)sub_81F70(a1, &v16, v7, a3, 0, 0) )
    {
      v4 = 0;
      if ( !v16 )
        return v4;
      goto LABEL_6;
    }
    if ( (unsigned __int8)(v18 - 10) > 1u )
    {
LABEL_5:
      if ( !v16 )
        return v4;
LABEL_6:
      *(_QWORD *)&v17 = 0;
      qfree();
      return v4;
    }
    v8 = *(_QWORD *)(a2 + 16);
    v21 = 0;
    v19 = nullptr;
    v20 = 0;
    LOBYTE(v9) = sub_81F70(a1, &v19, v8, a4, 0, 0);
    if ( !(_BYTE)v9 || (unsigned __int8)(v21 - 10) > 1u )
    {
LABEL_16:
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      goto LABEL_5;
    }
    if ( a4 == 15 && (_QWORD)v17 == 1 )
    {
      if ( (_QWORD)v20 == 1 || (v10 = v19 + 3, 24LL * (_QWORD)v20 == 24) )
      {
LABEL_24:
        v14 = v9;
        v11 = sub_2E200(a1, a2, *v19, a3, v16);
        v9 = v14;
        if ( v11 )
        {
LABEL_15:
          v4 = v9;
          goto LABEL_16;
        }
      }
      else
      {
        while ( *v10 == *v19 )
        {
          v10 += 3;
          if ( &v19[3 * (_QWORD)v20] == v10 )
            goto LABEL_24;
        }
      }
    }
    v13 = v9;
    if ( !(unsigned __int8)sub_22880((unsigned __int64 *)&v15, (__int64)&v16, (__int64)&v19, a1) )
      goto LABEL_16;
    sub_2D9A0(a1, a2, 0, 1, v15, (__int64)&v19, 1, 1);
    v9 = v13;
    goto LABEL_15;
  }
  return 0;
}

