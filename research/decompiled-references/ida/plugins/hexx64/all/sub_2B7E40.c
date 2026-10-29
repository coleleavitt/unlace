unsigned __int64 __fastcall sub_2B7E40(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  size_t v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v3 = a1[1];
  v4 = *a1;
  v18 = __readfsqword(0x28u);
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v16 = qvector_reserve((__int64)a1, v4, v3 + 1, 1);
    *a1 = v16;
    v4 = v16;
    v3 = a1[1];
  }
  *(_BYTE *)(v4 + v3) = 1;
  ++a1[1];
  v5 = pack_dd() - (_QWORD)v17;
  if ( v5 )
    sub_2B2810(a1, v17, v5);
  v6 = (_QWORD *)*a2;
  if ( *a2 )
  {
    if ( a2[1] )
    {
      v7 = (_QWORD *)v6[1];
      if ( v6 != v7 )
      {
        while ( 1 )
        {
LABEL_8:
          v8 = pack_dq() - (_QWORD)v17;
          if ( v8 )
            sub_2B2810(a1, v17, v8);
          v9 = pack_dd() - (_QWORD)v17;
          if ( v9 )
            sub_2B2810(a1, v17, v9);
          v10 = pack_dd() - (_QWORD)v17;
          if ( v10 )
            sub_2B2810(a1, v17, v10);
          if ( (*v7 & 2) != 0 )
            goto LABEL_17;
          v11 = (_QWORD *)v7[2];
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
            v13 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = *v13;
            if ( (*v13 & 2) == 0 )
            {
              while ( v7 == (_QWORD *)v13[2] )
              {
                v7 = v13;
                v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v14 & 2) != 0 )
                {
                  v7 = (_QWORD *)v15;
                  if ( v6 != (_QWORD *)v15 )
                    goto LABEL_8;
                  return v18 - __readfsqword(0x28u);
                }
                v13 = (_QWORD *)v15;
              }
            }
            v7 = v13;
            if ( v6 == v13 )
              return v18 - __readfsqword(0x28u);
          }
          else
          {
            do
            {
              v7 = v11;
              v11 = (_QWORD *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
LABEL_17:
            if ( v6 == v7 )
              return v18 - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}

