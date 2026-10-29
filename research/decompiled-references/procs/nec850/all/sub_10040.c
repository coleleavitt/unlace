__int64 __fastcall sub_10040(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int16 v12; // dx
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  char v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v15 = 0;
  v17 = 0;
  v16 = 0;
  v7 = sub_17080(a1, &v15, a3, a4, 0, a6 != 0 ? 0x14 : 0);
  v8 = (_QWORD *)v15;
  v9 = v7;
  if ( (_BYTE)v7 )
  {
    if ( (unsigned __int8)(v17 - 10) <= 1u )
    {
      if ( (_QWORD)v16 == 1 || (v10 = (_QWORD *)(v15 + 24), 24LL * (_QWORD)v16 == 24) )
      {
LABEL_12:
        v12 = *(_WORD *)(v15 + 16);
        v13 = v12 - 18;
        if ( (unsigned __int16)(v12 - 18) <= 0x35u )
        {
          if ( ((1LL << v13) & 0x9000001) != 0 )
          {
            if ( a5 )
            {
              *(_QWORD *)a5 = -1;
              *(_WORD *)(a5 + 8) = 0;
            }
            goto LABEL_17;
          }
          if ( ((1LL << v13) & 0x20000000180000LL) != 0 )
          {
            if ( a5 )
            {
              v14 = *(_QWORD *)(v15 + 8);
              *(_WORD *)(a5 + 8) = v12;
              *(_QWORD *)a5 = v14;
            }
LABEL_17:
            *a2 = *v8;
            goto LABEL_9;
          }
        }
      }
      else
      {
        while ( *(_QWORD *)v15 == *v10 )
        {
          v10 += 3;
          if ( v10 == (_QWORD *)(v15 + 24 * v16) )
            goto LABEL_12;
        }
      }
    }
    v9 = 0;
  }
LABEL_9:
  if ( v8 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v8);
  }
  return v9;
}
