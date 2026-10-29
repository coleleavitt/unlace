unsigned __int64 __fastcall sub_C34F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)v1 && **(int **)v1 > 2 )
  {
    v3 = *(_DWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 160);
    v2 = v5;
    *(_BYTE *)(a1 + 27) = v5 > 0;
    if ( v3 )
    {
      *(_QWORD *)(a1 + 272) = sub_C3690;
    }
    else if ( v2 <= 0 )
    {
      *(_QWORD *)(a1 + 272) = sub_10F3A0;
    }
    else
    {
      *(_QWORD *)(a1 + 272) = sub_10F6E0;
    }
    if ( *(_QWORD *)v1 )
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v1 + 80LL))(v1, 18, &v5);
  }
  return __readfsqword(0x28u) ^ v6;
}
