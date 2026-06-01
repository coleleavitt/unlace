__int64 __fastcall sub_2CC20(__int64 a1, int a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-5Ch]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a1 + 1820) == 1 )
  {
    v23 = 0;
    v8 = *((_QWORD *)sub_27B80(a1, a2, (__int64)a3, a4, a5, a6) + 1);
    v22 = 0;
    v9 = sub_4FBE0(a1 + 864, &v22, v8, 0, 0xFFFFFFFFLL);
    v10 = v22;
    if ( v9 && (_QWORD)v23 )
    {
      if ( 40LL * (_QWORD)v23 )
      {
        do
        {
          v21 = -1;
          sub_2CA10((_QWORD *)(a1 + 1040), &v21, (_QWORD *)(v10 + 8));
          v16 = a3[1];
          v17 = *a3;
          v18 = v16 + 1;
          if ( a3[2] < (unsigned __int64)(v16 + 1) )
          {
            v19 = qvector_reserve();
            *a3 = v19;
            v17 = v19;
            v16 = a3[1];
            v18 = v16 + 1;
          }
          a3[1] = v18;
          v11 = 32 * v16 + v17;
          v12 = v21;
          *(_QWORD *)(v11 + 8) = -1;
          v13 = v12 == -1;
          *(_QWORD *)v11 = v12;
          v14 = v23;
          v15 = v22;
          *(_BYTE *)(v11 + 24) = !v13;
          v10 += 40;
          *(_QWORD *)(v11 + 16) = -1;
        }
        while ( v10 != v15 + 40 * v14 );
        v10 = v15;
        result = 1;
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      result = 0;
    }
    if ( v10 )
    {
      v20 = result;
      *(_QWORD *)&v23 = 0;
      qfree();
      return v20;
    }
  }
  return result;
}

