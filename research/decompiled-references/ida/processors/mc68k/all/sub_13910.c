__int64 __fastcall sub_13910(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  v1 = (unsigned int)(unsigned __int8)getinf(40) - 4;
  if ( (int)v1 <= 0 )
    v1 = 1;
  result = sub_10A70(a1, 0, (__int64)&unk_1677B, v1, 32, *(_QWORD *)(a1 + 584));
  *(_DWORD *)(a1 + 144) |= 0x2000u;
  return result;
}

