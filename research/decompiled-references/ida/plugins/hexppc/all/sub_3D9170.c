unsigned __int64 __fastcall sub_3D9170(__int64 a1, double a2, double a3, double a4, __m128 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  _DWORD *v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rbx
  _QWORD *v13; // rax
  char v15; // [rsp+17h] [rbp-49h] BYREF
  int v16; // [rsp+18h] [rbp-48h] BYREF
  int v17; // [rsp+1Ch] [rbp-44h] BYREF
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+28h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 60) - 1) <= 1 )
    {
      v8 = *(_DWORD **)(a7 + 40);
      v9 = *(__int16 *)(a7 + 28);
      v19 = 0;
      *(_DWORD *)(a1 + 40) = v9;
      v18 = 0;
      sub_3D7AD0(a1, &v18, &v16, &v15, &v17, 0.0, a3, a4, a5, 0, v8);
      sub_3D0A10(a1, (__int64)v8, v7, *(_DWORD *)(a1 + 40), &v18, 0.0);
      v10 = v18;
      if ( v18 )
      {
        v11 = v19;
        if ( (_QWORD)v19 )
        {
          v12 = 0;
          do
          {
            v13 = (_QWORD *)(v10 + 24 * v12);
            if ( *v13 )
            {
              v13[1] = 0;
              qfree();
              v10 = v18;
            }
            ++v12;
          }
          while ( v11 != v12 );
        }
        *(_QWORD *)&v19 = 0;
        qfree();
      }
    }
  }
  return v20 - __readfsqword(0x28u);
}

