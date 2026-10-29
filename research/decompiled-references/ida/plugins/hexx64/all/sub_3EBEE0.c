__int64 __fastcall sub_3EBEE0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  int v5; // ebp
  int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  void *(*v10)(); // rdx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rax

  v3 = a2;
  v4 = a1[3];
  v5 = v4;
  v6 = *(_DWORD *)(*(_QWORD *)(a1[35] + 1504) + 80LL);
  *((_BYTE *)a1 + 392) = a3;
  a1[45] = -1;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  a1[46] = v7;
  if ( v7 != -1 )
  {
    a2 = *(_QWORD *)(v8 + 24);
    v9 = 8;
    if ( (void *(*)())a2 != sub_3EA140 )
    {
      v13 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64, void *(*)()))a2)(a1, a2, v8, sub_3EA140);
      v5 = *((_DWORD *)a1 + 6);
      v8 = *a1;
      v9 = *(char *)(v13 + 12);
    }
    a1[47] = v7 + (int)v4 * v9;
  }
  *((_DWORD *)a1 + 96) = v6 * *(_DWORD *)(v3 + 24);
  v10 = *(void *(**)())(v8 + 24);
  v11 = 8;
  if ( v10 != sub_3EA140 )
    v11 = *(char *)(((__int64 (__fastcall *)(__int64 *, __int64, void *(*)(), void *(*)()))v10)(a1, a2, v10, sub_3EA140)
                  + 12);
  result = (unsigned int)(v11 * v5 + 2 * *(_DWORD *)(v3 + 48) * v6);
  *((_DWORD *)a1 + 97) = result;
  return result;
}

