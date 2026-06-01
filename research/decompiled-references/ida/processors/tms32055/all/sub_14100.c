__int64 __fastcall sub_14100(_BYTE *a1)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_BYTE *, char); // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  void (__fastcall *v12)(_BYTE *, const char *, __int64); // rax
  __int64 v13; // rcx
  int v14; // edx
  size_t v15; // rax
  const char *v16; // r13
  int v17; // esi
  const char **v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-40h]

  v1 = 0;
  v2 = a1 + 265;
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  if ( a1[265] )
  {
    while ( 1 )
    {
      v3 = v1++;
      v2 += 40;
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, v3);
      if ( v1 == 8 || !*v2 )
        break;
      v4 = *(_QWORD *)a1;
      if ( a1[256] != 0xFF && (char)a1[256] == v1 )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(v4 + 128))(a1, 0xFFFFFFFFLL);
        v12 = *(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL);
        if ( (a1[252] & 8) != 0 )
          v12(a1, "|| ", 5);
        else
          v12(a1, ":: ", 5);
        v13 = *((_QWORD *)a1 + 78);
        v14 = *((unsigned __int16 *)a1 + 124);
        v15 = 2;
        v16 = "?";
        v17 = *(_DWORD *)(v13 + 104);
        if ( v14 >= v17 && v14 < *(_DWORD *)(v13 + 108) )
        {
          v18 = (const char **)(*(_QWORD *)(v13 + 112) + 16LL * (v14 - v17));
          v16 = *v18;
          if ( *v18 )
            v15 = strlen(*v18) + 1;
          else
            v16 = "?";
        }
        (*(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, &v16[v15], 5);
        v5 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v5 != (char *)sub_12CF0 )
          goto LABEL_20;
LABEL_7:
        v6 = *((_QWORD *)a1 + 4);
        if ( v6 )
        {
          v7 = v6 + 1;
          v8 = *((_QWORD *)a1 + 4);
          v9 = *((_QWORD *)a1 + 3);
          --v6;
          if ( *((_QWORD *)a1 + 5) >= v7 )
            goto LABEL_9;
        }
        else
        {
          v9 = *((_QWORD *)a1 + 3);
          v8 = 1;
          v7 = 2;
          if ( *((_QWORD *)a1 + 5) >= 2u )
            goto LABEL_9;
        }
        v19 = v8;
        v10 = qvector_reserve();
        v8 = v19;
        *((_QWORD *)a1 + 3) = v10;
        v9 = v10;
LABEL_9:
        *((_QWORD *)a1 + 4) = v7;
        *(_BYTE *)(v9 + v6) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v8) = 0;
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(v4 + 32))(a1, 44);
        v5 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v5 == (char *)sub_12CF0 )
          goto LABEL_7;
LABEL_20:
        v5(a1, 32);
      }
    }
  }
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

