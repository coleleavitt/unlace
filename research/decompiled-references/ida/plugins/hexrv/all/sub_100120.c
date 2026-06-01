unsigned __int64 __fastcall sub_100120(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v3; // r14
  unsigned __int8 v5; // r15
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rbp
  int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  __int128 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  unsigned __int8 v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+3Ch] [rbp-4Ch]
  char v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = *(_QWORD **)(v2 + 8);
      if ( (_QWORD *)v2 != v3 )
      {
        v5 = 0;
        v6 = -1;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v5 )
            {
              v7 = *((_BYTE *)v3 + 56);
              if ( v7 < v5 )
                goto LABEL_35;
              if ( v5 >= v7 )
              {
                v8 = v3[6];
                if ( v8 < v6 )
                {
LABEL_35:
                  if ( !under_debugger )
                    sub_37DDE0(50136);
LABEL_37:
                  BUG();
                }
                v9 = *(_DWORD *)(a2 + 88);
                if ( v8 > v6 )
                {
                  v17 = v8 - v6;
                  if ( v9 >= v17 )
                    v9 = v17;
                  v24 = v6;
                  v22 = 0;
                  v25 = v5;
                  v26 = v9;
                  v27 = -1;
                  v28 = 1;
                  v23 = 0;
                  v18 = sub_FFCE0(a1, (__int64)&v22);
                  if ( (_QWORD *)v2 != v18 && v18 != (_QWORD *)-24LL )
                  {
                    if ( !under_debugger )
                      sub_37DDE0(50137);
                    goto LABEL_37;
                  }
                }
              }
            }
            v10 = *((int *)v3 + 16);
            v11 = *(_DWORD *)(a2 + 88);
            v28 = 1;
            v12 = v3[6];
            v5 = *((_BYTE *)v3 + 56);
            v22 = 0;
            v13 = v10;
            v23 = 0;
            v6 = v12 + v10;
            v24 = v12;
            if ( v13 > v11 )
              v13 = v11;
            v25 = v5;
            v27 = -1;
            v26 = v13;
            v14 = sub_FFCE0(a1, (__int64)&v22);
            if ( (_QWORD *)v2 == v14 || v14 == (_QWORD *)-24LL )
            {
              if ( !under_debugger )
                sub_37DDE0(50138);
              goto LABEL_37;
            }
            if ( (*v3 & 2) == 0 )
              break;
LABEL_17:
            if ( (_QWORD *)v2 == v3 )
              return v29 - __readfsqword(0x28u);
          }
          v15 = (_QWORD *)v3[2];
          if ( (*(_BYTE *)v15 & 2) == 0 )
          {
            do
            {
              v3 = v15;
              v15 = (_QWORD *)v15[1];
            }
            while ( (*(_BYTE *)v15 & 2) == 0 );
            goto LABEL_17;
          }
          v19 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v20 = *v19;
          if ( (*v19 & 2) != 0 )
          {
LABEL_26:
            v3 = v19;
            if ( (_QWORD *)v2 == v19 )
              return v29 - __readfsqword(0x28u);
          }
          else
          {
            while ( 1 )
            {
              if ( v3 != (_QWORD *)v19[2] )
                goto LABEL_26;
              v3 = v19;
              v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
              v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v20 & 2) != 0 )
                break;
              v19 = (_QWORD *)v21;
            }
            v3 = (_QWORD *)v21;
            if ( v2 == v21 )
              return v29 - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

