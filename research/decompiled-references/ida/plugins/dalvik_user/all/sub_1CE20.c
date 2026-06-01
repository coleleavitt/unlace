__int64 __fastcall sub_1CE20(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  char *v5; // rdi
  char v6; // bl
  char *v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  _BYTE *v10; // rsi
  char v11; // cl
  char *v12; // rax
  char *v13; // rdi
  unsigned __int8 v14; // cl
  __int64 v15; // rbx
  char v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // r12
  size_t v20; // r13
  __int64 v21; // rbx
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // [rsp+Fh] [rbp-59h]
  char v26; // [rsp+17h] [rbp-51h] BYREF
  char *s; // [rsp+18h] [rbp-50h] BYREF
  void *src; // [rsp+20h] [rbp-48h]
  __int128 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v3 = *a1;
  v30 = __readfsqword(0x28u);
  if ( v3 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  result = 0;
  if ( *a2 == 40 )
  {
    v5 = a2 + 1;
    v6 = a2[1];
    src = nullptr;
    s = a2 + 1;
    v29 = 0;
    if ( !v6 )
      return 1;
    if ( v6 == 41 )
    {
LABEL_34:
      s = v5 + 1;
      if ( (unsigned __int8)sub_1CD00(&v26, &s) )
      {
        v15 = a1[1];
        v16 = v26;
        v17 = 2;
        if ( v15 )
          v17 = v15-- + 1;
        v18 = *a1;
        if ( a1[2] < v17 )
        {
          v24 = qvector_reserve();
          *a1 = v24;
          v18 = v24;
        }
        a1[1] = v17;
        *(_BYTE *)(v18 + v15) = v16;
        *(_BYTE *)(*a1 + v15 + 1) = 0;
        v19 = v29;
        if ( (_QWORD)v29 )
        {
          v20 = v29 - 1;
          if ( (_QWORD)v29 != 1 )
          {
            v21 = a1[1];
            v22 = v29 - 1;
            if ( v21 )
            {
              --v21;
              v22 = v20 + v21;
              v19 = v29 + v21;
            }
            if ( a1[2] < v19 )
              *a1 = qvector_reserve();
            v23 = *a1;
            a1[1] = v19;
            *(_BYTE *)(v23 + v22) = 0;
            memcpy((void *)(*a1 + v21), src, v20);
          }
        }
LABEL_33:
        result = 1;
        goto LABEL_28;
      }
    }
    else
    {
      while ( (unsigned __int8)(v6 - 66) <= 0x19u )
      {
        if ( ((1LL << (v6 - 66)) & 0x1120197) != 0 )
        {
          s = v5 + 1;
        }
        else
        {
          if ( v6 == 91 )
          {
            v11 = v5[1];
            v7 = v5 + 1;
            s = v5 + 1;
            if ( v11 == 91 )
            {
              v12 = v5 + 2;
              do
              {
                v13 = v12;
                v11 = *v12++;
              }
              while ( v11 == 91 );
              s = v13;
              v7 = v13;
            }
            v14 = v11 - 66;
            if ( v14 > 0x18u )
              break;
            if ( ((1LL << v14) & 0x1120197) == 0 )
            {
              if ( v14 != 10 )
                break;
              v7 = strchr(v7, 59);
              if ( !v7 )
                break;
            }
          }
          else
          {
            if ( v6 != 76 )
              break;
            v7 = strchr(v5, 59);
            if ( !v7 )
              break;
          }
          v6 = 76;
          s = v7 + 1;
        }
        v8 = v29;
        v26 = v6;
        v9 = 2;
        if ( (_QWORD)v29 )
        {
          v9 = v29 + 1;
          v8 = v29 - 1;
        }
        v10 = src;
        if ( *((_QWORD *)&v29 + 1) < v9 )
        {
          src = (void *)qvector_reserve();
          v10 = src;
        }
        *(_QWORD *)&v29 = v9;
        v5 = s;
        v10[v8] = v6;
        *((_BYTE *)src + v8 + 1) = 0;
        v6 = *v5;
        if ( !*v5 )
          goto LABEL_33;
        if ( v6 == 41 )
          goto LABEL_34;
      }
    }
    result = 0;
LABEL_28:
    if ( src )
    {
      v25 = result;
      *(_QWORD *)&v29 = 0;
      qfree();
      return v25;
    }
  }
  return result;
}

