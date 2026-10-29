__int64 __fastcall sub_170E0(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebp
  unsigned __int8 v3; // al
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // [rsp-10h] [rbp-28h]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  result = tag_strlen();
  v2 = result;
  if ( (_DWORD)result )
  {
    v3 = getinf();
    v4 = 1;
    v5 = v3 - v2 - 1;
    if ( v5 > 0 )
      v4 = (unsigned int)v5;
    sub_14390(a1, 0, (__int64)byte_1AB4D, *(_QWORD *)(a1 + 584), v4, 32, ".asmfunc");
    *(_DWORD *)(a1 + 144) |= 0x2000u;
    return v6;
  }
  return result;
}

