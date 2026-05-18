__int64 __fastcall sub_C3B70(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  char v8; // cl
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a2;
  v9[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*a1 + 272LL))(*a1, a2, v9);
  if ( !(_DWORD)result )
  {
    v6 = *(_QWORD *)(v9[0] + 16LL);
    if ( (_DWORD)a2 != *(_DWORD *)(v6 + 4) )
    {
      v7 = *(_QWORD *)(v9[0] + 8LL);
      *(_QWORD *)(v6 + 112) = v9[0];
      v8 = 100;
      *(_QWORD *)(v6 + 72) = a1;
      *(_DWORD *)(v6 + 4) = v4;
      *(_QWORD *)(v6 + 80) = v7;
      if ( v4 != 1 )
        v8 = 0;
      *(_BYTE *)(v6 + 9) = v8;
    }
    *a3 = v6;
  }
  return result;
}
