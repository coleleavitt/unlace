unsigned __int64 __fastcall sub_545B0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  char v4; // al
  __int64 (*v5)(); // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1024) && (unsigned __int8)netnode_inited() )
  {
    v6 = -1;
    netnode_check();
    v2 = *(_QWORD *)(a1 + 1000);
    v3 = v2 + 32LL * *(_QWORD *)(a1 + 1008);
    if ( v2 != v3 )
    {
      while ( 1 )
      {
        v4 = *(_BYTE *)(v2 + 8);
        if ( v4 == 3 )
          break;
        if ( v4 > 3 )
        {
          if ( v4 == 6 )
          {
            v5 = *(__int64 (**)())(*(_QWORD *)a1 + 632LL);
            if ( v5 != sub_2A1E0 )
              ((void (__fastcall *)(__int64, __int64, __int64 *))v5)(a1, v2, &v6);
          }
          goto LABEL_9;
        }
        if ( v4 == 1 )
        {
          v2 += 32;
          netnode_supset();
          if ( v3 == v2 )
            goto LABEL_16;
        }
        else
        {
          if ( v4 == 2 )
            break;
LABEL_9:
          v2 += 32;
          if ( v3 == v2 )
            goto LABEL_16;
        }
      }
      netnode_supset();
      goto LABEL_9;
    }
LABEL_16:
    *(_BYTE *)(a1 + 1024) = 0;
  }
  return v7 - __readfsqword(0x28u);
}

