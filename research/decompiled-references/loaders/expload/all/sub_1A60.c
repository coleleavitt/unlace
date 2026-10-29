__int64 __fastcall sub_1A60(__int64 a1, __int64 a2, __int64 *a3, __int16 a4)
{
  __int64 v5; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  char v13; // si
  unsigned __int64 v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int8 v20; // [rsp+6h] [rbp-4Ah] BYREF
  char v21; // [rsp+7h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-48h] BYREF
  __int128 v23; // [rsp+10h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-30h]

  LOWORD(v5) = a4 & 0x7FFF;
  v24 = __readfsqword(0x28u);
  v22 = 0;
  v23 = 0;
  lread(a2, &v20, 1);
  v8 = v20;
  if ( !v20 )
  {
    v19 = v23;
    v5 = (unsigned __int16)v5;
    v21 = 0;
    v14 = v22;
    if ( (unsigned __int16)v5 >= (unsigned __int64)v23 )
    {
      if ( (unsigned __int64)v23 >= (unsigned __int16)v5 )
        goto LABEL_17;
      if ( (unsigned __int64)&v21 < v22 || (unsigned __int64)&v21 >= v22 + *((_QWORD *)&v23 + 1) )
      {
        if ( *((_QWORD *)&v23 + 1) >= (unsigned __int64)(unsigned __int16)v5
          || (v22 = qvector_reserve(&v22, v22, (unsigned __int16)v5, 1),
              v14 = v22,
              v19 = v23,
              (unsigned __int64)v23 < (unsigned __int16)v5) )
        {
          do
          {
            *(_BYTE *)(v14 + v19++) = v21;
            v14 = v22;
          }
          while ( (unsigned __int16)v5 != v19 );
        }
      }
      else if ( *((_QWORD *)&v23 + 1) >= (unsigned __int64)(unsigned __int16)v5
             || (v22 = qvector_reserve(&v22, v22, (unsigned __int16)v5, 1),
                 v14 = v22,
                 v19 = v23,
                 (unsigned __int64)v23 < (unsigned __int16)v5) )
      {
        do
        {
          *(_BYTE *)(v14 + v19++) = 0;
          v14 = v22;
        }
        while ( (unsigned __int16)v5 != v19 );
      }
    }
    *(_QWORD *)&v23 = (unsigned __int16)v5;
LABEL_17:
    v12 = 1;
    goto LABEL_9;
  }
  if ( v20 > (int)(unsigned __int16)v5 )
    sub_1700((__int64)"Corrupted file");
  v9 = v23;
  v5 = (unsigned __int16)v5;
  if ( (unsigned __int64)v23 < (unsigned __int16)v5 )
  {
    v18 = v22;
    if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(unsigned __int16)v5 )
    {
      v22 = qvector_reserve(&v22, v22, (unsigned __int16)v5, 1);
      v9 = v23;
      v18 = v22;
    }
    memset((void *)(v18 + v9), 0, (unsigned __int16)v5 - v9);
    *(_QWORD *)&v23 = (unsigned __int16)v5;
    v8 = v20;
  }
  else if ( (unsigned __int16)v5 != (_QWORD)v23 )
  {
    *(_QWORD *)&v23 = (unsigned __int16)v5;
  }
  lread(a2, v22, v8);
  v10 = 0;
  v11 = v20;
  v12 = v20 + 1;
  if ( v20 < (unsigned int)(unsigned __int16)v5 )
  {
    do
    {
      v13 = *(_BYTE *)(v22 + v10++);
      *(_BYTE *)(v22 + v11++) = v13;
    }
    while ( (unsigned int)v11 < (unsigned __int16)v5 );
  }
  v14 = v22;
LABEL_9:
  v15 = *(_QWORD *)(a1 + 16) & (*a3 + v5);
  mem2base(v14, *a3, v15, -1);
  v16 = v22;
  *a3 = v15;
  if ( v16 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v16);
  }
  return v12;
}
