char __fastcall sub_6BB0(__int64 a1)
{
  int v1; // edx
  char result; // al
  int v3; // ecx
  int v4; // [rsp+Ch] [rbp-41Ch]
  __int64 v5; // [rsp+10h] [rbp-418h]

  v1 = qsscanf();
  result = 1;
  if ( v1 == 2 && v5 == 0x48435241425553LL )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 320LL);
    result = v3 == 0 || v4 == v3;
    if ( !result )
      return v4 / 10 == v3;
  }
  return result;
}

