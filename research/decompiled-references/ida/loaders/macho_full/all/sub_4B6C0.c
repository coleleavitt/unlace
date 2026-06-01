unsigned __int64 __fastcall sub_4B6C0(__int64 a1)
{
  __int64 v1; // rax
  int v3[2]; // [rsp+0h] [rbp-28h] BYREF
  int v4[2]; // [rsp+8h] [rbp-20h]
  int v5[2]; // [rsp+18h] [rbp-10h]

  *(_QWORD *)v5 = __readfsqword(0x28u);
  *(_QWORD *)v3 = &off_64188;
  *(_QWORD *)v4 = a1 + 320;
  if ( !(unsigned int)sub_4ABA0(a1, v3) )
  {
    v1 = *(_QWORD *)(a1 + 328);
    if ( v1 )
    {
      if ( v1 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 320) + 24LL) == 1 )
        *(_DWORD *)(a1 + 444) = 2;
      else
        *(_DWORD *)(a1 + 444) = 3;
    }
    else
    {
      *(_DWORD *)(a1 + 444) = 1;
    }
  }
  *(_BYTE *)(a1 + 442) = 1;
  return *(_QWORD *)v5 - __readfsqword(0x28u);
}

