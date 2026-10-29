__int64 __fastcall sub_32F7B0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  char v5; // al
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned __int64 *v11; // rax
  __int64 v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v5 = *(_BYTE *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  if ( v5 == 1 )
    return sub_64A60((_QWORD *)a3, *(_DWORD *)a1, a4);
  v7 = a4;
  if ( v5 != 5 )
    sub_328990(a5);
  v8 = *(_QWORD *)a1 + *(_QWORD *)(a2 + 1440);
  v12[0] = 0;
  v14 = 0;
  v12[1] = 0;
  v13 = 0;
  if ( a4 + v8 - 1 >= v8 )
  {
    v13 = qvector_reserve((__int64)&v13, 0, 1, 16);
    v11 = (unsigned __int64 *)(16 * v14 + v13);
    *v11 = v8;
    v11[1] = v7;
    *(_QWORD *)&v14 = v14 + 1;
  }
  v9 = sub_64780((_QWORD *)a3, v12);
  if ( !(_BYTE)v9 )
    v9 = sub_318470((unsigned __int64 **)(a3 + 16), (__int64)&v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  return v9;
}

