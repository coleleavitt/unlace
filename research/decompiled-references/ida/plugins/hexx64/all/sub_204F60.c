unsigned __int64 __fastcall sub_204F60(__int64 a1, __int64 *a2, _QWORD *a3, double a4, __m128 a5)
{
  _QWORD *v5; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  _QWORD *v13; // rdx
  __int64 i; // rbx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+10h] [rbp-98h] BYREF
  __int64 v24; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v25)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  char v29; // [rsp+58h] [rbp-50h]
  __int64 *v30; // [rsp+60h] [rbp-48h]
  __int64 v31; // [rsp+68h] [rbp-40h]
  unsigned __int64 v32; // [rsp+78h] [rbp-30h]

  v5 = (_QWORD *)*a3;
  v32 = __readfsqword(0x28u);
  if ( v5 )
  {
    if ( a3[1] )
    {
      v7 = (_QWORD *)v5[1];
      if ( v5 != v7 )
      {
        while ( 1 )
        {
LABEL_4:
          if ( !v7[4] )
          {
            v8 = *(_QWORD *)(a1 + 16);
            a4 = 0.0;
            v25 = nullptr;
            v26 = 0;
            v27 = 0;
            v28 = 0;
            sub_103D60((__int64)(v7 + 3), *(_QWORD *)(v8 + 64), (__int64 *)&v25);
            sub_64640(a2, (__int64 *)&v25, v9, v10, v11, v12);
            sub_317C60(a2 + 2, (__int64)&v27);
            if ( v27 )
            {
              *(_QWORD *)&v28 = 0;
              qfree(v27);
            }
            qfree((__int64)v25);
          }
          if ( (*v7 & 2) != 0 )
            goto LABEL_11;
          v13 = (_QWORD *)v7[2];
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
            v19 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
            v20 = *v19;
            if ( (*v19 & 2) == 0 )
            {
              while ( v7 == (_QWORD *)v19[2] )
              {
                v7 = v19;
                v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v20 & 2) != 0 )
                {
                  v7 = (_QWORD *)v21;
                  if ( *a3 != v21 )
                    goto LABEL_4;
                  goto LABEL_12;
                }
                v19 = (_QWORD *)v21;
              }
            }
            v7 = v19;
            if ( (_QWORD *)*a3 == v19 )
              break;
          }
          else
          {
            do
            {
              v7 = v13;
              v13 = (_QWORD *)v13[1];
            }
            while ( (*(_BYTE *)v13 & 2) == 0 );
LABEL_11:
            if ( (_QWORD *)*a3 == v7 )
              break;
          }
        }
      }
    }
  }
LABEL_12:
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (unsigned __int8)sub_64880(a2) && !a2[3] )
      break;
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_127A20((__int64)v22, *(_QWORD *)(a1 + 16), i, 129, v15, v16, a4, a5);
      if ( (unsigned __int8)sub_64780(a2, v22)
        || (unsigned __int8)sub_318470((unsigned __int64 **)a2 + 2, (__int64)&v23) )
      {
        v18 = *(_QWORD *)(a1 + 16);
        v26 = 0;
        v28 = 0u;
        v29 = 0;
        v25 = &off_4DEE80;
        v30 = a2;
        v31 = a1 + 80;
        v27 = v18;
        sub_11E900((_BYTE *)i, (__int64)&v25);
        if ( v23 )
        {
          v24 = 0;
          qfree(v23);
        }
      }
      else if ( v23 )
      {
        v24 = 0;
        qfree(v23);
      }
      qfree(v22[0]);
    }
  }
  return v32 - __readfsqword(0x28u);
}

