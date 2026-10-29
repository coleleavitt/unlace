__int64 __fastcall sub_9280(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v9[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 84) == a3 )
    return v10 - __readfsqword(0x28u);
  v7 = a3;
  if ( a4 != -1 )
  {
    btoa64();
    sub_89A0(a2, (__int64)"assume %s = %s", *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v7), v9);
    return v10 - __readfsqword(0x28u);
  }
  return sub_89A0(a2, (__int64)"drop %s", *(const char **)(*(_QWORD *)(v6 + 56) + 8LL * a3));
}

