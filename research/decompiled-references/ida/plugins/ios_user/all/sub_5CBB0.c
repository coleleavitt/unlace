__int64 __fastcall sub_5CBB0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r10
  _BYTE *v8; // rsi
  __int64 v9; // r14
  size_t v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  _BYTE *v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v18 = __readfsqword(0x28u);
  if ( a2 <= 0 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v17 = 0;
  v16 = (_BYTE *)qvector_reserve();
  v5 = 0;
  *(_QWORD *)&v17 = 2;
  *v16 = 65;
  v16[1] = 0;
  do
  {
    if ( v5 )
    {
      v9 = v17;
      if ( (_QWORD)v17 )
      {
        v6 = v17 + 1;
        v7 = v17;
        v8 = v16;
        v9 = v17 - 1;
        if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
        {
LABEL_9:
          v15 = v7;
          v14 = v6;
          v16 = (_BYTE *)qvector_reserve();
          v7 = v15;
          v8 = v16;
          v6 = v14;
        }
      }
      else
      {
        v8 = v16;
        v6 = 2;
        v7 = 1;
        if ( *((_QWORD *)&v17 + 1) < 2u )
          goto LABEL_9;
      }
      *(_QWORD *)&v17 = v6;
      v8[v7] = 0;
      v16[v9] = 44;
    }
    v10 = strlen(*(const char **)(a3 + 8 * v5));
    sub_20960((__int64 *)&v16);
    sub_58A80((__int64 *)&v16, *(_BYTE **)(a3 + 8 * v5++), v10);
  }
  while ( v3 != v5 );
  LOBYTE(v11) = sub_5B360(a1, &v16);
  v12 = v11;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v12;
}

