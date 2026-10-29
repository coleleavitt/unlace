__int64 __fastcall sub_229120(_DWORD *a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v6; // rbx
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r13d
  signed __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  int *v13; // r15
  int v14; // ebx
  int *v15; // r14
  int v16; // eax
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  signed __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a4;
  v7 = a1[22];
  v19[1] = __readfsqword(0x28u);
  if ( (_DWORD)v6 == -1 )
    v6 = 1;
  v8 = sub_1C34E0((__int64)a1, &v18, v19, v7, a5);
  if ( !(_BYTE)v8 || v18 > a3 )
    return 0;
  v9 = v8;
  v10 = a3 + v6;
  if ( v10 > v19[0] )
  {
    v11 = *(_DWORD *)(a2 + 72);
    if ( v11 <= 0x10 )
      v11 = getinf();
    if ( v11 != 176
      && v11 != 256
      && !(unsigned __int8)getinf_flag()
      && v10 <= ((v19[0] + *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL) - 1) & -*(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL)) )
    {
      v12 = sub_1C3500(a1, a5);
      v13 = *(int **)(a2 + 456);
      v14 = v12;
      v15 = &v13[*(_QWORD *)(a2 + 464)];
      if ( v15 == v13 )
        return v9;
      while ( 1 )
      {
        v16 = sub_1C3500((_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * *v13), a5);
        if ( v14 < v16 && a3 >= v16 )
          break;
        if ( v15 == ++v13 )
          return v9;
      }
    }
    return 0;
  }
  return v9;
}

