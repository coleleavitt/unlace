unsigned __int64 __fastcall sub_65D0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r10
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  unsigned int v14; // r14d
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int8 v21; // al
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  unsigned __int64 i; // rbp
  unsigned __int64 v28; // rax
  unsigned int v29; // [rsp+8h] [rbp-90h]
  unsigned __int64 v30; // [rsp+10h] [rbp-88h]
  unsigned int v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  int v33; // [rsp+1Ch] [rbp-7Ch]
  unsigned __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  __int64 v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 < a1 || a5 == 3 )
    goto LABEL_41;
  v6 = a1;
  if ( a3 )
  {
    sub_5890((__int64)&qword_143C0, -1, 4);
    v8 = a2;
    v9 = *(_DWORD *)(qword_143C0 + qword_143F0);
    v10 = qword_143F0 + 4;
  }
  else
  {
    sub_5890((__int64)&qword_143C0, -1, 2);
    v8 = a2;
    v9 = *(unsigned __int16 *)(qword_143C0 + qword_143F0);
    v10 = qword_143F0 + 2;
  }
  v30 = v8;
  qword_143F0 = v10;
  sub_5890((__int64)&qword_143C0, -1, 2);
  v11 = v30;
  v12 = qword_143F0 + 2;
  v13 = *(_WORD *)(qword_143C0 + qword_143F0);
  qword_143F0 += 2;
  if ( v13 )
  {
    if ( !v9 || a1 >= v30 )
      return a1;
    v29 = a5 + 1;
    v14 = v13;
    v15 = v12;
    v31 = a3;
    v16 = v11;
    do
    {
      qword_143F0 = v15;
      --v9;
      if ( a1 >= v16 )
        break;
      v17 = 0;
      do
      {
        v18 = sub_65D0(a1, v16, v31, a4, v29);
        a1 = v18;
        if ( v6 == v18 )
          sub_52E0("illegal iterated data record");
        ++v17;
      }
      while ( v17 < v14 && v18 < v16 );
    }
    while ( v9 && v18 < v16 );
    return a1;
  }
  v21 = sub_5EE0((__int64)&qword_143C0, -1);
  if ( !v21 )
LABEL_41:
    sub_52E0("wrong iterated data");
  v22 = v30;
  v23 = v21;
  if ( a1 < v30 && v9 )
  {
    v19 = a1;
    v32 = v21;
    v33 = v21;
    v34 = v22;
    do
    {
      --v9;
      v24 = xmmword_143C8 - qword_143F0;
      if ( qword_143F0 >= (unsigned __int64)xmmword_143C8 )
        v24 = 0;
      if ( v33 <= v24 )
        v24 = v33;
      mem2base(qword_143C0 + qword_143F0, v19, v19 + v24, -1);
      if ( !dword_143AC )
      {
        v25 = qword_143F0 - a4;
        v26 = qword_143F0 - a4 + v32;
        for ( i = v19 + a4 - qword_143F0; ; set_fixup(i + v26, &v36) )
        {
          v28 = netnode_supprev(qword_143B0, v26, 83);
          v26 = v28;
          if ( v28 == -1 || v28 < v25 )
            break;
          v36 = 0;
          v38 = 0;
          v39 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_11480);
          if ( netnode_supval(qword_143B0, v25, &v36, 40, 83) != 40 )
            sub_52E0("fixup data error");
        }
      }
      v19 += v32;
    }
    while ( v9 && v19 < v34 );
    v23 = v32;
  }
  else
  {
    v19 = a1;
  }
  qword_143F0 += v23;
  return v19;
}

