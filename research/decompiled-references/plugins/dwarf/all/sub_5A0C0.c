__int64 __fastcall sub_5A0C0(unsigned __int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v7 = operator new(0x1C8u);
  sub_571B0(v7, a2, 1);
  *(_QWORD *)v7 = &off_C8560;
  *(_DWORD *)(v7 + 384) = a3;
  *(_QWORD *)(v7 + 408) = 0;
  *(_QWORD *)(v7 + 416) = 0;
  *(_QWORD *)(v7 + 440) = -1;
  *(_DWORD *)(v7 + 448) = 0;
  *(_OWORD *)(v7 + 392) = 0;
  *(_OWORD *)(v7 + 424) = 0;
  sub_59E30(v7, a4, 0);
  v8 = a1[1];
  v9 = *a1;
  v16[0] = v7;
  v10 = a1[2];
  v11 = v8 + 1;
  if ( (unsigned __int64)v16 >= v9 && (unsigned __int64)v16 < v9 + 8 * v10 )
  {
    if ( v10 < v11 )
    {
      v15 = qvector_reserve(a1, v9, v8 + 1, 8);
      *a1 = v15;
      v9 = v15;
      v8 = a1[1];
    }
    *(_QWORD *)(v9 + 8 * v8) = v7;
  }
  else
  {
    if ( v10 < v11 )
    {
      v14 = qvector_reserve(a1, v9, v8 + 1, 8);
      v12 = v16[0];
      *a1 = v14;
      v9 = v14;
      v8 = a1[1];
    }
    else
    {
      v12 = v7;
    }
    *(_QWORD *)(v9 + 8 * v8) = v12;
  }
  ++a1[1];
  return v7;
}
