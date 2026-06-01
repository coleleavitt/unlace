__int64 __fastcall sub_30DC0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  char v4; // cl
  int v5; // eax
  unsigned __int8 v6; // [rsp+Fh] [rbp-39h]
  int v7; // [rsp+1Ch] [rbp-2Ch] BYREF
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_30630((__int64)a1, v8, &v7) )
    return 0;
  v2 = v8[0];
  v6 = same_value_jpt(a1, v8[0], 0);
  if ( !v6 )
    return 0;
  v3 = a1[47];
  v4 = *(_BYTE *)(v2 + 5);
  v5 = v7;
  *(_DWORD *)(v3 + 64) = *(unsigned __int16 *)(v2 + 6);
  *(_BYTE *)(v3 + 68) = v4;
  sub_30CF0(a1, v2 + 40, v5 + 1);
  return v6;
}

