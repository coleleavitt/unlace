__int64 __fastcall sub_BBF0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  __int16 v6; // dx
  __int64 v8; // rcx

  v3 = a3 & 3;
  v4 = *(_DWORD *)(a1 + 600) == 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  v5 = *(_QWORD *)(a1 + 248);
  if ( v4 )
  {
    *(_WORD *)(v5 + 6) = *((unsigned __int8 *)&dword_178EC + v3);
    v8 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v8 + 40;
    *(_BYTE *)(v8 + 41) = 1;
    v6 = (unsigned __int8)byte_178E8[v3];
    v5 = *(_QWORD *)(a1 + 248);
  }
  else
  {
    v6 = *((unsigned __int8 *)&dword_178E4 + v3);
  }
  *(_WORD *)(v5 + 6) = v6;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

