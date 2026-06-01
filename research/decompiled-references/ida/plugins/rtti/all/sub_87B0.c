__int64 __fastcall sub_87B0(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned __int64 v19; // rbp
  const char *v20; // rcx
  __int64 v21; // rdi
  char *v22; // rsi
  const char *v23; // rsi
  int v26; // [rsp+1Ch] [rbp-FCh]
  __int64 v27; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+28h] [rbp-F0h]
  _BYTE v29[24]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-B0h]
  __int64 v32; // [rsp+70h] [rbp-A8h]
  int v33; // [rsp+78h] [rbp-A0h]
  __int128 v34; // [rsp+80h] [rbp-98h]
  __int64 v35; // [rsp+90h] [rbp-88h]
  __int128 v36; // [rsp+98h] [rbp-80h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-70h]
  __int64 v38; // [rsp+B0h] [rbp-68h]
  int v39; // [rsp+B8h] [rbp-60h]
  int v40; // [rsp+C0h] [rbp-58h]
  __int64 v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v6 = a4;
  v42 = __readfsqword(0x28u);
  a1[7] = 0;
  if ( !a4 )
    return 1;
  v11 = getseg();
  if ( v11 && (*(_QWORD *)(v11 + 8) - a3) >> 2 >= v6 && (unsigned __int8)sub_4AA0(a1, a3, a3 + 4 * v6, 0) )
  {
    v12 = a1[7];
    if ( v12 < v6 )
    {
      v16 = a1[6];
      if ( a1[8] < v6 )
      {
        v17 = qvector_reserve();
        v12 = a1[7];
        a1[6] = v17;
        v16 = v17;
      }
      memset((void *)(v16 + 8 * v12), 0, 8 * (v6 - v12));
      a1[7] = v6;
    }
    else if ( v6 != v12 )
    {
      a1[7] = v6;
    }
    v13 = 0;
    v26 = sub_4F60(a1, 3, a2);
    if ( v26 == -1 )
      return 0;
    while ( 1 )
    {
      v27 = -1;
      if ( !(unsigned __int8)sub_4D90(a1, 4 * (int)v13, &v27, 1, 0) )
        break;
      v14 = v27;
      if ( v27 == -1 || !(unsigned __int8)is_mapped() )
        break;
      if ( !sub_4ED0(a2, 1u, v14) )
      {
        v15 = a1[5];
        v33 = 0;
        v31 = v15;
        v37 = v15;
        v38 = -1;
        v32 = -1;
        v35 = 0;
        v39 = -1;
        v40 = 0;
        v41 = -1;
        memset(v29, 0, sizeof(v29));
        v30 = 0;
        v34 = 0;
        v36 = 0;
        if ( !(unsigned __int8)sub_81A0(v29, a2, v14, a5) )
        {
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v29[16] )
          {
            *(_QWORD *)&v30 = 0;
            qfree();
          }
          break;
        }
        if ( !v13 && a6 == -1 )
          a6 = v32;
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree();
        }
        if ( *(_QWORD *)&v29[16] )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
      }
      *(_QWORD *)(a1[6] + 8 * v13++) = v14;
      if ( v6 == v13 )
      {
        if ( !v26 )
        {
          if ( (a5 & 0x10) != 0 )
          {
            v18 = 4;
            if ( *(_QWORD *)(a1[5] + 368) == 8 )
              v18 = 3;
            v19 = *a1;
            while ( v19 < a1[1] )
            {
              ++v26;
              memset(v29, 0, sizeof(v29));
              sub_53A0((__int64 *)v29);
              v20 = &haystack;
              if ( *(_QWORD *)&v29[8] )
                v20 = *(const char **)v29;
              v19 += sub_10380(a1[5], v19, v18, v20, 0);
              if ( *(_QWORD *)v29 )
              {
                *(_QWORD *)&v29[8] = 0;
                qfree();
              }
            }
          }
          if ( (a5 & 0x20) != 0 && a6 != -1 )
          {
            v21 = a1[5];
            v27 = 0;
            memset(v29, 0, sizeof(v29));
            v28 = 0;
            if ( (unsigned __int8)sub_7980(v21, a2, (__int64)&v27, a6, a5) )
            {
              v22 = (char *)&haystack;
              if ( (_QWORD)v28 )
                v22 = (char *)v27;
              if ( (unsigned __int8)sub_4600((__int64)v29, v22, 1, "??_R2", "8") )
              {
                v23 = &haystack;
                if ( *(_QWORD *)&v29[8] )
                  v23 = *(const char **)v29;
                sub_10260(*a1, v23);
              }
            }
            if ( *(_QWORD *)v29 )
            {
              *(_QWORD *)&v29[8] = 0;
              qfree();
            }
            if ( v27 )
            {
              *(_QWORD *)&v28 = 0;
              qfree();
            }
          }
        }
        return 1;
      }
    }
  }
  a1[7] = 0;
  a1[3] = 0;
  *(_OWORD *)a1 = -1;
  return 0;
}
